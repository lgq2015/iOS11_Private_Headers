/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationTerminationAssertion : NSObject {
    NSString * _bundleID;
    id  _plugInHoldToken;
    NSString * _reason;
    unsigned long long  _serialNumber;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) id plugInHoldToken;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) unsigned long long serialNumber;

- (id)bundleID;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)plugInHoldToken;
- (id)reason;
- (unsigned long long)serialNumber;
- (void)setBundleID:(id)arg1;
- (void)setPlugInHoldToken:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSerialNumber:(unsigned long long)arg1;

@end
