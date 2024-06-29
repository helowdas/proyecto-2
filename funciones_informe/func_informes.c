# include <stdio.h>
# include <time.h>
# include "estructuras_usuario//estructuras_usuario.h"

// FUNCION DE MESES

char mes_name(int mes)
{
    switch (mes)
    {
    case 1:
        return "Enero";
        break;
    case 2:
        return "Febrero";
        break;
    case 3:
        return "Marzo";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Mayo";
        break;
    case 6:
        return "Junio";
        break;
    case 7:
        return "Julio";
        break;
    case 8:
        return "Agosto";
        break;
    case 9:
        return "Septiembre";
        break;
    case 10:
        return "Octubre";
        break;
    case 11:
        return "Noviembre";
        break;
    case 12:
        return "Diciembre";
        break;
    default:
        return "Mes no existente";
        break;
    }
}


// FUNCIONES DE RECORRIDO DE ARBOLES

void preOrden_marcial(actividad_artes_marciales* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_calistenia(actividad_calistenia* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_caminar(actividad_caminar* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_ciclismo(actividad_ciclismo* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_correr(actividad_correr* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_crossfit(actividad_crossfit* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_futbol(actividad_futbol* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_pesas(actividad_levantamiento_pesas* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_nadar(actividad_nadar* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_padel(actividad_padel* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_pilates(actividad_pilates* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_tenis(actividad_tenis* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_voleibol(actividad_voleibol* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

void preOrden_yoga(actividad_yoga* nodo, int* hour_monthly, int mes, int año)
{
    if (nodo == NULL)
        return -1;

    if(mes == 1)
    {
        mes = 13;
    }
    if(nodo->tiempo.month = mes-1 && nodo->tiempo.year == año)
    {
        *hour_monthly += nodo->tiempo.duracion_hour;
    }

    preOrden(nodo->left, hour_monthly, mes);
    preOrden(nodo->right, hour_monthly, mes);
}

// FUNCIONES INFORMEN HORAS ACTIVIDAD FISICA MENSUAL

int informe_horas_mensuales(main_tree* arbol, int mes, int año)
{
    int hour_monthly = 0;
    
    preOrden_calistenia(arbol->actividades->calistenia, &hour_monthly, mes, año);
    preOrden_marcial(arbol->actividades->artes_marciales, &hour_monthly, mes, año);
    preOrden_caminar(arbol->actividades->caminar, &hour_monthly, mes, año);
    preOrden_ciclismo(arbol->actividades->ciclismo, &hour_monthly, mes, año);
    preOrden_correr(arbol->actividades->correr, &hour_monthly, mes, año);
    preOrden_crossfit(arbol->actividades->crossfit, &hour_monthly, mes, año);
    preOrden_futbol(arbol->actividades->futbol, &hour_monthly, mes, año);
    preOrden_pesas(arbol->actividades->levantamiento_pesas, &hour_monthly, mes, año);
    preOrden_nadar(arbol->actividades->nadar, &hour_monthly, mes, año);
    preOrden_padel(arbol->actividades->padel, &hour_monthly, mes, año);
    preOrden_pilates(arbol->actividades->pilates, &hour_monthly, mes, año);
    preOrden_tenis(arbol->actividades->tenis, &hour_monthly, mes, año);
    preOrden_voleibol(arbol->actividades->voleibol, &hour_monthly, mes, año);
    preOrden_yoga(arbol->actividades->yoga, &hour_monthly, mes, año);

    int hour_monthly2 = 0;
    preOrden_calistenia(arbol->actividades->calistenia, &hour_monthly2, mes-1, año);
    preOrden_marcial(arbol->actividades->artes_marciales, &hour_monthly2, mes-1, año);
    preOrden_caminar(arbol->actividades->caminar, &hour_monthly2, mes-1, año);
    preOrden_ciclismo(arbol->actividades->ciclismo, &hour_monthly2, mes-1, año);
    preOrden_correr(arbol->actividades->correr, &hour_monthly2, mes-1, año);
    preOrden_crossfit(arbol->actividades->crossfit, &hour_monthly2, mes-1, año);
    preOrden_futbol(arbol->actividades->futbol, &hour_monthly2, mes-1, año);
    preOrden_pesas(arbol->actividades->levantamiento_pesas, &hour_monthly2, mes-1, año);
    preOrden_nadar(arbol->actividades->nadar, &hour_monthly2, mes-1, año);
    preOrden_padel(arbol->actividades->padel, &hour_monthly2, mes-1, año);
    preOrden_pilates(arbol->actividades->pilates, &hour_monthly2, mes-1, año);
    preOrden_tenis(arbol->actividades->tenis, &hour_monthly2, mes-1, año);
    preOrden_voleibol(arbol->actividades->voleibol, &hour_monthly2, mes-1, año);
    preOrden_yoga(arbol->actividades->yoga, &hour_monthly2, mes-1, año);

    printf("\n-----------------------------------------------------------\n");
    printf("   Tus Horas de actividad fisica del mes %s fueron: %d\n", mes_name((mes==1)?12:mes-1), hour_monthly);
    printf("\n-----------------------------------------------------------\n");

    if(hour_monthly > hour_monthly2)
    {
        printf("\033[33m\n**** NUEVO LOGRO ***\n\033[0m\n");
        printf("\033[35m¡Felicidades este mes has tenido %d horas de actividad fisica mas que en el anterior!\033[0m\n", hour_monthly-hour_monthly2);
        printf("\033[33m\n********************\n\033[0m\n");
    
    }
}

