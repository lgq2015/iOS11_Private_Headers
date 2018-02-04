/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKConcurrentEvaluator : NSObject {
    NSMutableDictionary * _getters;
}

@property (nonatomic, retain) NSMutableDictionary *getters;

- (void).cxx_destruct;
- (void)addEvaluationBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)getters;
- (id)objectForKey:(id)arg1;
- (void)setGetters:(id)arg1;

@end
