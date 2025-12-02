class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int able = 0;
        queue<int> student;
        for(int i : students){
            student.push(i);
        }
        bool pickedFromLoop = true;
        int p = 0;
        while(pickedFromLoop && !student.empty()){
            pickedFromLoop = false;
            for(int i = 0; i< student.size(); i++){
                if(student.front() == sandwiches[p]){
                    p++;
                    student.pop();
                    pickedFromLoop = true;
                    able++;
                    break;
                }
                int a = student.front();
                student.pop();
                student.push(a);
            }
        }
        return students.size() - able;
    }
};