/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFilterParameters : NSObject {
    NSDictionary * _inputNodes;
    NSDictionary * _settings;
}

@property (copy) NSDictionary *inputNodes;
@property (copy) NSDictionary *settings;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)inputNodes;
- (void)setInputNodes:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
