#ifndef SCHEDULER_H
#define SCHEDULER_H

class Scheduler {
    
    private:
        void addTask();
        void removeTask();

    public:
        Scheduler();
        void scheduleTask();
        void executeTasks();
};

#endif