from mcq_v1_class import Question

question_prompt = [
    "What year did Hitler die?\n(a) 1934\n(b) 1945\n(c) 1941",
    "What's the capital of canada?\n(a) Toronto\n(b) Madinty\n(c) Ottawa",
    "What's more dangerous?\n(a) A Scorpion\n(b) An Elephant\n(c) Electronics"
]

questions = [
    Question(question_prompt[0], "b"),
    Question(question_prompt[1], "c"),
    Question(question_prompt[2], "c")
]

def run_test(questions_):
    score = 0
    for question in questions_:
        user_ans = input(question.prompt + "\n")
        if user_ans == question.right_ans:
            score += 1

    print(f"Result:\n {score} / {len(questions)}")

run_test(questions)