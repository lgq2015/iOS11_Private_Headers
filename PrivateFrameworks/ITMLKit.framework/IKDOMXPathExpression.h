/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMXPathExpression : IKJSObject <IKJSDOMXPathExpression> {
    id /* block */  _evaluatingBlock;
}

@property (nonatomic, copy) id /* block */ evaluatingBlock;

- (void).cxx_destruct;
- (id)evaluate:(id)arg1 :(long long)arg2 :(id)arg3;
- (id /* block */)evaluatingBlock;
- (id)initWithAppContext:(id)arg1 evaluatingBlock:(id /* block */)arg2;
- (void)setEvaluatingBlock:(id /* block */)arg1;

@end
