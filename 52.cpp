// FERCHO

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;


int main()
{
    /*setlocale(LC_ALL, "Spanish");

    string pepe;
    int humor;
    int desayuno;
    int lugar;
    int grrr;
    int resp;
    int xyolo;


    cout << "Hola, soy el profesor Coke ¿Me recuerdas tu nombre? " << endl;
    cin >> pepe;
    cout << "Okay " << pepe << " nadie te preguntó y nunca serás un maestro Ferchomon" << endl;
    cout << " " << endl;
    cout << "Te acabas de levantar abruptamente de tu sueño ¿Cómo te sientes hoy?" << endl;
    cout << "1 <Hambriento>  2 <Sexy>  3 <Cansado>" << endl;
    cin >> humor;
    switch (humor) {
        case 1: cout << "Estás hambriento así que decides bajar a desayunar" << endl; 
            cout << "¿Qué quieres desayunar?" << endl;
            cout << "1 <Chocochispis>  2 <Buevito revuelto>  3 <Huevo crudo con cereal>" << endl;
            cin >> desayuno;
        switch (desayuno) {
            case 1: cout << "Que rico tu Chocochispis" << endl;

                cout << "Hey! " << pepe << " vas a llegar tarde a la escuela" << endl;
                cout << "¿Qué quieres responder?" << endl;
                cout << "1 <Okay ya voy>  2 <No iré hoy, no tengo ganas>" << endl;
                cin >> xyolo;
                if (xyolo == 1) {
                    cout << "Te marchas antes de que te pase algo malo" << endl;
                }
                else{
                    cout << "¿¡¡QUÉ!!?" << endl;
                    cout << "Has muerto a manos de tu madre" << endl;
                }


            break;

            case 2: cout << "No te supiste hacer un huevo" << endl << "-10 puntos de aprobacíon de mamá" << endl;


            break;

            case 3: cout << "¿Cómo se te ocurrió tal atrocidad? Vacias los huevos crudos en tu plato de cereal y luego le pones cereal pero al instante que lo pruebas te mueres de forma inmediata";
            break;
        }
        break;

        case 2: cout << "Amaneciste todo horny y tus ideologias milenials te dicen que debes tener mentalidad de tiburón" << endl;
            cout << "¿Donde buscarás a tu primera presa? (Grrrrr)" << endl;
            lugares:
            cout << "1 <Biblioteca>  2 <Disney>  3 <Parque>  4 <En el centro>" << endl;
            cin >> lugar;
        switch (lugar) {
            case 1: cout << "Come libros nivel 10 aparece frente a ti ¿Que vas a hacer ahora?" << endl;
                cout << "1 <Ir por ella>  2 <Ay no ya me arrepentí>" << endl;
                cin >> grrr;
                switch (grrr) {
                case 1: cout << "No tienes nada de tacto pero ella aun así te dice muy amablemente que tiene novio" << endl;
                    cout << "¿Que vas a hacer ahora?" << endl;
                    cout << "1 <No te creo>  2 <Entendible, tenga un buen dia>" << endl;
                    cin >> resp;
                    if (resp == 1) {
                        cout << "Ella utiliza el grimorio que tenía en su mano para invocar a su novio Cthulhu" << endl;
                    }
                    else {
                        cout << "Regresas a tu casa a reconsiderar tu vida" << endl;
                    }
              
                }
            break;

            case 2: cout << "No te alcanza el dinero jaja, elige otro lugar";
                goto lugares;
        }
        


    }




    system("pause");
    return 0;
    */

    setlocale(LC_ALL, "Spanish");

    string nombre; 
    int rama1;
    int desayuno;
    int ama;
    int trasdesayuno;
    int ahoraque;
    int cremas;
    int israel;
    int isekai;
    int polis;
    int zombies;

    cout << "NOTA: A excepcion del nombre(s) que te pida el progrma, contesta unicamente con numeros, las opciones YA están enumeradas, de contestar con letras las preguntas de opcion multiple el programa solo va a terminar" << endl;
    system("pause");
    system("CLS");
    Sleep(500);

    cout << "Hola, soy el profesor Coke ¿Podrías recordarme tu nombe?" << endl; 

    cin >> nombre; 

    cout << "Okay " << nombre << ", pues lamento informarte que no serás maestro Ferchomon" << endl;
    Sleep(500);
    cout << "." << endl; 
    Sleep(500);
    cout << "." << endl;
    Sleep(500);
    cout << "." << endl;
    Sleep(500);
    cout << " " << endl;
    
    do {
        cout << "De repente te levantas de tu sueño" << endl;
        cout << "¿Qué quieres hacer ahora?" << endl;
        cout << "1 <Bajar a desayunar>  2 <Dormir un poco más>  3 <Alch no sé>" << endl;

        cin >> rama1;

        switch (rama1) {
            //Rama 1 - A partir del desayuno
            case 1:
                cout << "Pues a desayunar..." << endl;
                
                do {
                    Sleep(500);
                    cout << "¿Qué vas a querer desayunar?" << endl;
                    cout << "1 <Cereal con leche>  2 <Huevo revuelto>  3 <Lo que cocine mi mamá>" << endl;

                    cin >> desayuno;

                    switch (desayuno) {
                        //Si eliges cereal
                        case 1:
                            cout << "Eliges desayunar cereal" << endl;
                            do {
                                cout << "¿Ahora qué?" << endl;
                                cout << "1 <Juguemos al maincra>  2 <A mimir de nuevo> 3 <Coumbustion espontanea>" << endl;

                                cin >> trasdesayuno;

                                switch (trasdesayuno) {
                                    //maincra
                                    case 1:
                                        cout << "Pues juguemos al maincra" << endl;
                                        Sleep(5000);
                                        system("C:\Program Files (x86)\Minecraft Launcher\MinecraftLauncher.exe");
                                        cout << " " << endl;
                                        cout << "Jeje ¿Parecia en serio no?" << endl;
                                        cout << "Encontré una solucion para linux pero de hecho no se hacer que me lea la ubicacion del archivo en windows" << endl;
                                    break;

                                    //mimir
                                    case 2:
                                        cout << "<Con mucha hueva te regresas a dormir>" << endl;
                                        cout << "Listo... se acabó. No se me ocurrió nada más" << endl;
                                    break;

                                        //muerte
                                    case 3:
                                        cout << "Contra todo pronostico sucede lo que elegiste..." << endl;
                                        cout << "Comensaste a incendiarte y te mueres" << endl;
                                    break;
                                }

                                if (trasdesayuno >= 4) {
                                    system("CLS");
                                    Sleep(500);
                                }
                            } while (trasdesayuno >= 4);
                        break;

                        //Si eliges huevo
                        case 2:
                            cout << "Lol, tú ni sabes cocinar" << endl;
                            cout << "<Te intoxicas con la receta que sacaste de internet y te mueres>" << endl;
                        break;
                        
                        //Si escojes suicidio
                        case 3:
                            cout << "AMAAAAAA!!!" << endl;
                            cout << "<Le gritas a tu madre con todos tus pulmones>" << endl;
                            Sleep(8000);
                            cout << "<El silencio te preocupa un poco y empuiezas a preguntarte si fue buena idea gritarle>" << endl;
                            Sleep(3000);
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << " " << endl;
                            cout << "¡¿QUÉ QUIERES " << nombre << "?! (Te grita de vuelta tu madre)" << endl;
                            
                            do {
                                Sleep(500);
                                cout << "1 <Jeje, nada>  2 <Hazme el desayuno>" << endl;

                                cin >> ama;

                                switch (ama) {
                                    //sorry
                                case 1:
                                    cout << "<Tu mamá se enoja un chingo y te deja hospitalizado>" << endl;
                                    break;

                                    //muerte instantanea
                                case 2:
                                    cout << "<MUERTE INSTANTANEA>" << endl;
                                    break;
                                }

                                if (ama >= 3) {
                                    system("CLS");
                                    Sleep(500);
                                }
                            } while (ama >= 3);
                        break;
                    }

                    if (desayuno >= 4) {
                        system("CLS");
                        Sleep(500);
                    }
                }while (desayuno >= 4);
            break;

            //Rama 2 - A partir de dormir más
            case 2:
                cout << "Pues a dormir..." << endl;
                cout << " " << endl;
                Sleep(2500);
                cout << "¡Felicidades! Perdiste toda la juventud que tenias" << endl;
                do {
                    cout << "<Despiertas 30 años más viejo>" << endl;
                    cout << "¿Qué vas a hacer ahora?" << endl;
                    cout << "1 <Ir a matar zombies>  2 <Buscar cremas rejuvenecedoras>  3 <Dormir a ver si se arregla solo el problema>" << endl;

                    cin >> ahoraque;

                    switch (ahoraque){
                        //Zombies
                    case 1:
                        do {
                            cout << "Decides salir a matar Zombies" << endl;
                            cout << "Ecuentras al primer zombie!" << endl;
                            cout << "¿Cómo lo quieres matar?" << endl;
                            cout << "1 <Escopetazo en la cabeza>  2 <Espadazo en el cuello>" << endl;

                            cin >> zombies;

                            switch (zombies) {
                                //escopeta
                                case 1:
                                    cout << "Le das un escopetazo en la cara a una anciana" << endl;
                                    cout << "Estás permanentemente preso..." << endl;
                                break;

                                //espada
                                case 2:
                                    cout << "Sacas una espada medieval de tu mochila y degollas a una ancianita" << endl;
                                    cout << "Estás preso de por vida..." << endl;
                                break;
                            }

                            if (zombies >= 3) {
                                system("CLS");
                                Sleep(500);
                            }
                        } while (zombies >= 3);
                        break;

                        //Cremas
                        case 2:
                            do {
                                cout << "Decides buscar cremas rejuenecedoras pero no parece haber en casa" << endl;
                                cout << "¿Quies salir a buscar?" << endl;
                                cout << "1 <Okay, busquemos afuera>  2 <Nah, seguramete hay en casa>" << endl;

                                cin >> cremas;

                                switch (cremas) {
                                    //buscar afuera
                                    case 1:
                                        cout << "Decides salir a buscar la crema afuera" << endl;
                                        cout << "Camión-kun aparece de la nada y te mata!" << endl;
                                        cout << "." << endl;
                                        Sleep(500);
                                        cout << "." << endl;
                                        Sleep(500);
                                        cout << "." << endl;
                                        Sleep(500);
                                        cout << " " << endl;
                                        do {
                                            cout << "<Abres tus ojos pero no reconoces el lugar en el que estás>" << endl;
                                            cout << "Parece que camión-kun te mató tan fuerte que te mandó a otra realidad" << endl;
                                            cout << "¿Qué vas a hacer ahora?" << endl;
                                            cout << "1 <Comenzar una aventura>  2 <Si me mato seguro regreso>" << endl;

                                            cin >> isekai; 

                                            switch (isekai) {
                                                //aventura
                                                case 1:
                                                    cout << "No sé, tienes una aventura de fantasia y matas dragones o algo" << endl;
                                                    cout << "La neta no se me ocurrió nada más así que aquí acaba" << endl;
                                                    cout << "(Pero al menos no moriste del todo, no como con casi todo lo demas)" << endl;
                                                break;

                                                //suicidio
                                                case 2:
                                                    cout << "Dios te dio otra oportunidad y la cagaste..." << endl;
                                                    cout << "Ahora si estás muerto" << endl;
                                                break;
                                            }
                                            if (isekai >= 3) {
                                                system("CLS");
                                                Sleep(500);
                                            }
                                        } while (isekai >= 3);
                                    break;

                                    //buscar en casa
                                    case 2:
                                        cout << "Te vas a quedar en ca-" << endl;
                                        cout << "NO PUEDE SER!!!" << endl;
                                        do {
                                            cout << "Tu casa está bajo ataque por extremistas israeles" << endl;
                                            cout << "¿Qué vas a hacer ahora?" << endl;
                                            cout << "1 <Hablar con ellos>  2 <Huir>  3 <Fingir ser un pato>" << endl;

                                            cin >> israel;

                                            switch (israel) {
                                                //hablar
                                                case 1:
                                                    cout << "De hecho y contra todo pronostico parece haber funcionado" << endl;
                                                    cout << "Parece que esas clases de arabe no fueron en vano" << endl;
                                                    cout << "Les respondes perfectamente fluido y te enmascaran para que otros de los suyos no te vallan a disparar por accidente" << endl;
                                                    do {
                                                        cout << "El ejercito llegó a la escena ¿Que harás ahora?" << endl;
                                                        cout << "1 <Ayuda!>  2 <Apoyar a los extremistas>" << endl;

                                                        cin >> polis;

                                                        switch (polis) {
                                                            //ayuda
                                                            case 1:
                                                                cout << "Corres hacia el ejercito pidiendo ayuda pero se te olvida algo importante..." << endl;
                                                                cout << "Estás enmascarado, armado y olvidaste que debias dejar de hablar en arabe" << endl;
                                                                cout << " " << endl;
                                                                cout << "El ejercito te dispara de inmediato" << endl;
                                                            break;

                                                            //israel es primero
                                                            case 2:
                                                                cout << "Gritas a todo pulmon" << endl; 
                                                                cout << "ISRAEL ES PRIMERO!!!" << endl;
                                                                cout << " " << endl;
                                                                cout << "El ejercito te mata de inmediato, pero tus nuevos amigos lloran tu muerte y eres considerado un heroe en su país" << endl;
                                                            break;
                                                        }
                                                        if (polis >= 3) {
                                                            system("CLS");
                                                            Sleep(500);
                                                        }
                                                    } while (polis >= 3);
                                                break;

                                                //escapar
                                                case 2:
                                                    cout << "<Intentas correr pero te disparan en la espalda y mueres>" << endl;
                                                break;

                                                //pato
                                                case 3:
                                                    cout << "Finges ser un pato y aunque no eres muy bueno, ellos confundidos deciden solo dejarte" << endl;
                                                    cout << "De repente despiertas en un hospital sin tus piernas" << endl;
                                                    cout << "Oh no! Todo fue como en Super Campeones" << endl;
                                                break;
                                            }

                                            if (israel >= 4) {
                                                system("CLS");
                                                Sleep(500);
                                            }
                                        } while (israel >= 4);
                                    break;
                                }

                                if (cremas >= 3) {
                                    system("CLS");
                                    Sleep(500);
                                }
                            } while (cremas >= 3);
                        break;

                        //Mimir
                        case 3:
                            cout << "Si tu problema surgió durminedo seguro así tambíen se quita" << endl;
                            Sleep(500);
                            cout << "." << endl;
                            Sleep(500);
                            cout << "." << endl;
                            Sleep(500);
                            cout << "." << endl;
                            Sleep(500);
                            cout << " " << endl;
                            cout << "De hecho parece haber funcionado" << endl;
                            cout << "Despertaste 30 años más viejo porque te levantaste mientras seguias descansando, pero ahora que dormiste bien pareces estar bien..." << endl;
                            cout << "Pero si perdiste un dia entero dormido" << endl;
                        break;
                    }

                    if (ahoraque >= 4) {
                        system("CLS");
                        Sleep(500);
                    }
                } while (ahoraque >= 4);
            break;

            //Rama 3 - A partit de "Alch no sé"
            case 3:
                cout << "Pues... alch no sé" << endl;
                cout << "<Decides que mejor no quieres jugar>" << endl;
                cout << "" << endl;
                Sleep(1500);
                cout << "Bueno... fue un placer, pero yo tampoco supe que poner aquí" << endl;
            break;
        }

        if (rama1 >= 4){
            system("CLS");
            Sleep(500);
        }

    } while (rama1 >= 4);

    system("pause");
    return 0;
}


