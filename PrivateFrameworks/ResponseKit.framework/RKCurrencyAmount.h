/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKCurrencyAmount : NSObject {
    NSString * _currency;
    NSString * _string;
    double  _value;
}

@property (readonly) NSString *currency;
@property (readonly) NSString *string;
@property (readonly) double value;

- (void).cxx_destruct;
- (id)currency;
- (id)initWithString:(id)arg1 currency:(id)arg2 value:(double)arg3;
- (id)string;
- (double)value;

@end
