/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATMessage : NSObject <NSSecureCoding> {
    NSInputStream * _dataStream;
    unsigned int  _messageID;
    NSDictionary * _parameters;
    unsigned int  _sessionID;
    ATCodableStream * _stream;
    double  _timestamp;
}

@property (nonatomic, retain) NSInputStream *dataStream;
@property (nonatomic) unsigned int messageID;
@property (nonatomic) unsigned int options;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, retain) ATCodableStream *stream;
@property (nonatomic) double timestamp;

// Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalDescription;
- (id)dataStream;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)messageID;
- (unsigned int)options;
- (id)parameterForKey:(id)arg1;
- (id)parameters;
- (unsigned int)sessionID;
- (void)setDataStream:(id)arg1;
- (void)setMessageID:(unsigned int)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setParameters:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setStream:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)stream;
- (double)timestamp;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPMessage;
- (id)ATPMessageWithPayloadData:(id)arg1;
- (id)initWithATPMessage:(id)arg1;

@end
