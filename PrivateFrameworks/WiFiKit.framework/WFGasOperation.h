/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFGasOperation : WFOperation {
    unsigned long long  _elements;
    <WFWiFiGasProxy> * _gasProxy;
    NSSet * _networks;
    NSSet * _results;
}

@property unsigned long long elements;
@property (nonatomic, retain) <WFWiFiGasProxy> *gasProxy;
@property (nonatomic, retain) NSSet *networks;
@property (retain) NSSet *results;

- (void).cxx_destruct;
- (void)_processGasResults:(id)arg1 error:(int)arg2;
- (unsigned long long)elements;
- (id)gasProxy;
- (id)initWithGasProxy:(id)arg1 networks:(id)arg2 elements:(unsigned long long)arg3;
- (id)networks;
- (id)results;
- (void)setElements:(unsigned long long)arg1;
- (void)setGasProxy:(id)arg1;
- (void)setNetworks:(id)arg1;
- (void)setResults:(id)arg1;
- (void)start;

@end
