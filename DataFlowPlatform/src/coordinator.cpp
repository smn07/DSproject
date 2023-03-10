#include <omnetpp.h>

using namespace omnetpp;

class Coordinator: public cSimpleModule{
    /*

    //Modify queue 

    The coordinator has an array workersData, containing informations about the id, type, task executed (array of index of tasks done) and state of each worker.
    Initially the Coordinator read and validates the JSON file with the map and the reduce and the input data. Then divides the input into tasks and populates the GlobalData, Map, Reduce and taskQueue structure.
    
    At Runtime:
    First the coordinator sends a defineMap and defineReduce to all workers, to tell them of the current Map and Reduce. Also sends a setData to mappers with a pointer to the GlobalData.
    The coordinator sends and executeTask message to a mapper, with the index of the GlobalData to read. Then it will update the workersData structure.
    When a taskCompletion message is recieved the info about that worker is updated, another task from the queue is scheduled on that free mapper with the usual executeTask message. 

    The coordinator will also periodically ping all workers by sending a ping and scheduling a self pingTimeout message, if no pong is recieved before a pingTimeout for that worker then it is considered failed and its worker data is updated. 
    If a mapper fails its task is put on top of the queue.
    If a reducer fails all its work is lost, we wait for it to come back online.
    
    When a back online message is recieved the info about the worker is updated. If it is a mapper a new task is scheduled, if it is a reducer all mappers are informed and send the corresponding key.

    when all tasks are completed a message is sent to the reducers telling to output the final result.

    messages:
        defineMap(Map*);
        defineReduce(Reduce*);
        setData(GlobalData*);
        executeTask(int index);
        Mapcompletion(workerId);
        ping();
        pingTimeout(workerId);
        pong(workerId);
        resendKey(int reducerID);
        backOnline(workerId);
        TasksDone();

        // strugglerTimeout(workerId);
        // stopExecution();
        
        

    dataStructures:
        GlobalData[] data: input data;
        Map: map program;
        Reduce: reduce program;
        workersData: contains id, type, task, working or failed;
        taskQueue: queue of int;
    */
}
