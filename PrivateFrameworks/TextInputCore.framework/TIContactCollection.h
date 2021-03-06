/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIContactCollection : NSObject {
    NSMutableArray * _contacts;
    long long  _count;
    bool  _sourceHasRelevancyScore;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) bool sourceHasRelevancyScore;

- (void)addContact:(id)arg1;
- (long long)count;
- (void)dealloc;
- (void)enumerateContactsUsingBlock:(id /* block */)arg1;
- (id)initWithRelevanceScoreType:(bool)arg1;
- (bool)sourceHasRelevancyScore;

@end
