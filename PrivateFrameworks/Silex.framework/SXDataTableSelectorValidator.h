/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableSelectorValidator : NSObject {
    unsigned long long  _dataOrientation;
    SXDataRecordStore * _recordStore;
}

@property (nonatomic, readonly) unsigned long long dataOrientation;
@property (nonatomic, readonly) SXDataRecordStore *recordStore;

- (void).cxx_destruct;
- (id)conditionEngineForSelector:(id)arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)dataOrientation;
- (id)descriptorForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithRecordStore:(id)arg1 dataOrientation:(unsigned long long)arg2;
- (id)recordStore;
- (bool)validateCellSelector:(id)arg1 forIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)validateColumnSelector:(id)arg1 forColumnIndex:(unsigned long long)arg2;
- (bool)validateRowSelector:(id)arg1 forRowIndex:(unsigned long long)arg2;

@end
