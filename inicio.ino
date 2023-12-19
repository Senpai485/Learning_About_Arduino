// como preparar um ambiente para inciar o arduino!

/*
Declaramos tudo que for necessario para o projeto

Neste caso sera apenas um led!
*/

int led1 = 3;

/*
Iniciamos o setup que sera o inico e apenas sera lido uma vez
Declaramos os respetivos componentes como INPUT ou OUTPUT
*/

void setup()
{

    pinMode(led1, OUTPUT);
}

// Agora criamos a funçao de repetiçao!

void loop()
{

    digitalWrite(led1, 1);
    delay(1000);
    digitalWrite(led1, 0);
    delay(1000);
}

/*
Lembrando termos 1 ou HIGH sera a mesma coisa!
Este codigo devera apenas fazer um pisca pisca!

digitalWrite(led1, 1) é igual a ter digitalWrite(led1, HIGH);
digitalWrite(led1, 0) é igual a ter digitalWrite(led1, LOW);
*/