/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSimpleMessage : NSObject {
    NSError * _error;
    NSDictionary * _payload;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSDictionary *payload;

+ (id)messageWithPayload:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithPayload:(id)arg1;
- (id)payload;
- (void)setError:(id)arg1;
- (void)setPayload:(id)arg1;

@end
