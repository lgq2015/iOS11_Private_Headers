/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STMediaChannel : STSiriModelObject {
    NSString * _callSign;
    NSString * _channelIdentifier;
    NSString * _name;
    NSURL * _streamUrl;
}

@property (nonatomic, copy) NSString *callSign;
@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSURL *streamUrl;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callSign;
- (id)channelIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setCallSign:(id)arg1;
- (void)setChannelIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStreamUrl:(id)arg1;
- (id)streamUrl;

@end
