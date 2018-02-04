/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTableCellChangeNotifier : NSObject {
    NSHashTable * _observers;
}

@property (retain) NSHashTable *observers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)notifyOfChangeAtColumnID:(id)arg1 rowID:(id)arg2;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;

@end
