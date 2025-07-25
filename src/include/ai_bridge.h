#ifndef AI_BRIDGE_H
#define AI_BRIDGE_H

// Enum para representar as decisões da IA
typedef enum {
    BUY,
    SELL,
    HOLD
} Decision;

// Declaração da função que consulta a IA
Decision get_ai_decision(double current_price);

#endif // AI_BRIDGE_H