/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSObserverList : NSObject {
    bool  _hasZeroOrOneObserver;
    id  _observers;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _observersLock;
    id  _owner;
}

+ (id)_copyObserversOfObject:(id)arg1;

- (void).cxx_destruct;
- (void)_directAddObserver:(id)arg1;
- (void)_receiveBox:(id)arg1;
- (id)addObserver:(id)arg1 toObservableObject:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)finishObserving;
- (id)init;
- (void)removeObservation:(id)arg1;
- (void)removeObserver:(id)arg1 observation:(id)arg2;

@end
