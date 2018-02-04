/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUMessageRequestEntry : NSObject {
    id /* block */  _handler;
    NSDictionary * _options;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSDictionary *options;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)options;
- (void)setHandler:(id /* block */)arg1;
- (void)setOptions:(id)arg1;

@end
