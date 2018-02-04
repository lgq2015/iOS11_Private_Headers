/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPowerAssertion : NSObject {
    unsigned int  _assertion;
    NSString * _identifier;
}

- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end
