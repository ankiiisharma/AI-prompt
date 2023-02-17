import openai
openai.api_key = "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"
model_engine = "text-davinci-002"

prompt = str(input("Enter your Question: "))

completion = openai.Completion.create(
engine=model_engine,

prompt=prompt,

max_tokens = 1024,

n=1,

stop=None,

temperature=0.9,

)

response = completion.choices[0].text

print(response)