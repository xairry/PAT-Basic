#include <string>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

typedef struct {
    int answer_n;
    int cent;
    int correct_answer_n;
    int * hash_correct_answer;
    int * hash_answer_error_counting;
} question;

int main() {
    int N, M, question_n, error_n = 0, no_cent;

    cin>>N>>M;

    question * questions = new question[M];

    for (int i=0; i<M; i++) {
        cin>>questions[i].cent>>questions[i].answer_n>>questions[i].correct_answer_n;
        questions[i].hash_correct_answer = new int[questions[i].answer_n];
        memset(questions[i].hash_correct_answer, 0, questions[i].answer_n);
        questions[i].hash_answer_error_counting= new int[questions[i].answer_n];
        memset(questions[i].hash_answer_error_counting, 0, questions[i].answer_n);
        for (int j=0; j<questions[i].correct_answer_n; j++) {
            string a;
            cin>>a;
            questions[i].hash_correct_answer[a[0] - 'a'] = 1;
        }
    }
//    cout<<questions[0].hash_correct_answer[0];
//    cout<<questions[0].hash_correct_answer[1];
//    cout<<questions[0].hash_correct_answer[2];

    for (int i=0; i<N; i++) {
        
        float person_cent = 0;
        for (int qid=0; qid<M; qid++) {
            no_cent = 0;
            int n;
            char * answer = new char[n];
            scanf("\n(%d", &n);
            int question_id = 0;
            int correct_n = 0;
            for (int j=0; j<n; j++) {
                string a;
                cin>>a;
                answer[j] = a[0] - 'a';

//                cout<<a<<"_"<<questions[qid].hash_correct_answer[answer[j]];

                if (questions[qid].hash_correct_answer[answer[j]] == 1) {
                    correct_n++;
                } else {
                    no_cent = 1;
                }
            }
            if (no_cent != 1) {
                if (correct_n == questions[qid].correct_answer_n) {
                    person_cent += questions[qid].cent;
                } else {
                    person_cent += questions[qid].cent / 2.0;
                }
            }
            for (int aid=0; aid<questions[qid].answer_n; aid++) {
                int need_answer = questions[qid].hash_correct_answer[aid];
                for (int paid = 0; paid<n; paid++) {
                    if (need_answer == 1 && answer[paid] == aid) {
                        need_answer = 0;
                        continue;
                    } else if (need_answer == 0 && answer[paid] == aid) {
                        questions[qid].hash_answer_error_counting[aid]++;
                    }
                }
                if (need_answer == 1) {
                    questions[qid].hash_answer_error_counting[aid]++;
                }
            }
        }

        printf("%.1f\n", person_cent);
    }

    int max_error = 0;
    for (int i=0; i<M; i++) {
        for (int j=0; j<questions[i].answer_n; j++) {
            if (max_error < questions[i].hash_answer_error_counting[j]) {
                max_error = questions[i].hash_answer_error_counting[j];
            }
        }
    }
    if (max_error == 0) {
        printf("Too simple\n");
    } else {
        for (int i=0; i<M; i++) {
            for (int j=0; j<questions[i].answer_n; j++) {
                if (max_error == questions[i].hash_answer_error_counting[j]) {
                    printf("%d %d-%c\n", max_error, i+1, j+'a');
                }
            }
        }
    }

    return 0;
}



// Result needs Person cent and the choosen error count.
// Count the person cent in fly: person_cent_all, question_n;
// Question need use struct to store, for each qestion the answers be a hash a b c d e f g -'a'... for counting the error number, and another hash to mark the correct answear. Initiate the hash before using. Use error_n to count error number.
// If error_n == 0 output too simple
// For each answer:
//   Read the number of answer 
//   For each of the item, push it into answer:
//     Use a correct_n to count the correct item.
//     If one mischoosen happend, no_cent marked
//   If the correct_n equel to teh question->correct_n => full cent, if not => half cent



