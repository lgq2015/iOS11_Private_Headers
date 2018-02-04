/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATResponse : ATMessage <NSSecureCoding> {
    NSError * _error;
    bool  _partial;
}

@property (nonatomic, retain) NSError *error;
@property (getter=isPartial, nonatomic) bool partial;

// Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (bool)isPartial;
- (void)setError:(id)arg1;
- (void)setPartial:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPMessage;
- (id)ATPMessageWithPayloadData:(id)arg1;
- (id)initWithATPMessage:(id)arg1;

@end
