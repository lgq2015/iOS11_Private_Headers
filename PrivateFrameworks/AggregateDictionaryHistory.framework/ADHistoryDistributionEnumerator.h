/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
 */

@interface ADHistoryDistributionEnumerator : NSObject {
    void * _iterator;
}

- (bool)getNextValue:(double*)arg1 secondsInDayOffset:(int*)arg2;
- (id)initWithIterator:(void*)arg1;

@end
