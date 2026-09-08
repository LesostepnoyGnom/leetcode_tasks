class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int max_del;
        ListNode* curr_node = head; // зафиксируем начало связанного списка

        while(curr_node->next != nullptr){ // шагаем по списку, пока следующий узел не окажеться пустым 

            int first_node = curr_node->val;         // значение в текущем узле
            int second_node = curr_node->next->val;  // значение в следующем узле

            for(int j = 0; max_del > 0; j++){ // расчёт МОД
                    max_del = max(first_node, second_node) - j;
                    if(first_node % max_del == 0 && second_node % max_del == 0){
                        break;
                    }
                }

            ListNode* newNode = new ListNode(max_del); // создаём новый узел с общим делителем

            newNode->next = curr_node->next; // переводим на следующий узел чтобы записать значение
            curr_node->next = newNode; // Вставляем между текущим и следующим
            curr_node = newNode->next;
        }
        return head;
    }
};
