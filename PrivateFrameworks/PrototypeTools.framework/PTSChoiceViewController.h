/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSChoiceViewController : UITableViewController <PTSRowObserver> {
    PTSChoiceRow * _row;
    NSIndexPath * _valueIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTSChoiceRow *row;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkAppropriateCell;
- (id)_indexPathForValue:(id)arg1;
- (void)dealloc;
- (id)initWithPresentingRow:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)row;
- (void)row:(id)arg1 didChangeValue:(id)arg2;
- (void)setRow:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
