#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct {
    int question_id;
    int cent;
    int answer_n;
    int correct_answer_n;
    int wrong_number;
    char * answer_s;
} question;

typedef struct {
    int answer_id;
    int question_id;
    int stu_id;
    int cent_get;
    int cent;
    char * answer_s;
} answer;

int cmp(question a, question b) {
    if (a.wrong_number > b.wrong_number) return 1;
    else if (a.wrong_number < b.wrong_number) return 0;
    if (a.question_id < b.question_id) return 1;
    else return 0;
}

int main() {

    int N, M;
    scanf("%d %d", &N, &M);

    // read the question
    question * questions = new question[M];
    for (int i=0; i<M; i++) {
        question * current_que = &questions[i];
        current_que->question_id = i;
        current_que->wrong_number = 0;
        // cent ans_num correct_ans_num correct_ans
        scanf("%d %d %d", &current_que->cent, &current_que->answer_n, &current_que->correct_answer_n);
        current_que->answer_s = new char[10];
        memset(current_que->answer_s, '\0', 10);
        for (int j=0; j<current_que->correct_answer_n; j++) {
            char temp = ' ';
            do { 
                scanf("%c", &temp);
            } while (temp == ' ');
            current_que->answer_s[j] = temp;
        }
    }

    // read the answers
    answer * answers = new answer[N * M];
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            // read the answers
            answer * current_ans = &answers[(i*M + j)];
            // add question and person information
            current_ans->answer_id = i * M + j;
            current_ans->stu_id = i;
            current_ans->question_id = j;
            // read the answer number 
            char n_answers_ch;
            do {
                scanf("%c", &n_answers_ch);
            } while (n_answers_ch < '0' || n_answers_ch > '9');
            // read the anser 
            int answers_n = n_answers_ch - '0';
            current_ans->answer_s = new char[answers_n];
            for (int ans_i=0; ans_i<answers_n; ans_i++) {
                char temp;
                do {
                    scanf("%c", &temp);
                } while (temp == ' ');
                current_ans->answer_s[ans_i] = temp;
            }
        }
    }

    // output answer
    int * person_cents = new int[N];
    memset(person_cents, 0, N);
    for (int i=0; i<N * M; i++) {
        answer * current_ans = &answers[i];
        question * current_que = &questions[current_ans->question_id];
        if (strcmp(current_ans->answer_s, current_que->answer_s) == 0) {
            person_cents[current_ans->stu_id] += current_que->cent;
        } else {
            current_que->wrong_number++;
        }
    }
    for (int i=0; i<N; i++) {
        printf("%d\n", person_cents[i]);
    }
    sort(questions, questions+M, cmp);
    if (questions[0].wrong_number == 0) {
        printf("Too simple");
    } else {
        int last_wrong = 0;
        int print_n = 0;
        for (int i=0; i<M; i++) {
            int current_wrong = questions[i].wrong_number;
            if (last_wrong > current_wrong) break;
            else {
                last_wrong = current_wrong;
                if (print_n == 0)
                    printf("%d ", questions[i].wrong_number);
                print_n++;
            }
        }
        for (int i=0; i<print_n; i++) {
            printf("%d", questions[i].question_id+1);
            if (i != print_n - 1) printf(" ");
        }
    }

    return 0;
}
