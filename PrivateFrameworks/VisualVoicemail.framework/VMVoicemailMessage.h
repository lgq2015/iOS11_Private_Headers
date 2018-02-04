/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailMessage : PBCodable <NSCopying> {
    VMAudioMessage * _audio;
    NSString * _callbackDestinationID;
    NSString * _dataURL;
    double  _date;
    double  _duration;
    unsigned int  _flags;
    struct { 
        unsigned int date : 1; 
        unsigned int duration : 1; 
        unsigned int flags : 1; 
        unsigned int identifier : 1; 
        unsigned int protocolVersion : 1; 
        unsigned int remoteUID : 1; 
    }  _has;
    unsigned int  _identifier;
    unsigned int  _protocolVersion;
    unsigned int  _remoteUID;
    NSString * _senderDestinationID;
    VMTranscriptMessage * _transcript;
    NSString * _transcriptionURL;
}

@property (nonatomic, retain) VMAudioMessage *audio;
@property (nonatomic, retain) NSString *callbackDestinationID;
@property (nonatomic, retain) NSString *dataURL;
@property (nonatomic) double date;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) bool hasAudio;
@property (nonatomic, readonly) bool hasCallbackDestinationID;
@property (nonatomic, readonly) bool hasDataURL;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic) bool hasRemoteUID;
@property (nonatomic, readonly) bool hasSenderDestinationID;
@property (nonatomic, readonly) bool hasTranscript;
@property (nonatomic, readonly) bool hasTranscriptionURL;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) unsigned int remoteUID;
@property (nonatomic, retain) NSString *senderDestinationID;
@property (nonatomic, retain) VMTranscriptMessage *transcript;
@property (nonatomic, retain) NSString *transcriptionURL;

- (void).cxx_destruct;
- (id)audio;
- (id)callbackDestinationID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataURL;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (unsigned int)flags;
- (bool)hasAudio;
- (bool)hasCallbackDestinationID;
- (bool)hasDataURL;
- (bool)hasDate;
- (bool)hasDuration;
- (bool)hasFlags;
- (bool)hasIdentifier;
- (bool)hasProtocolVersion;
- (bool)hasRemoteUID;
- (bool)hasSenderDestinationID;
- (bool)hasTranscript;
- (bool)hasTranscriptionURL;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)protocolVersion;
- (bool)readFrom:(id)arg1;
- (unsigned int)remoteUID;
- (id)senderDestinationID;
- (void)setAudio:(id)arg1;
- (void)setCallbackDestinationID:(id)arg1;
- (void)setDataURL:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setHasRemoteUID:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setRemoteUID:(unsigned int)arg1;
- (void)setSenderDestinationID:(id)arg1;
- (void)setTranscript:(id)arg1;
- (void)setTranscriptionURL:(id)arg1;
- (id)transcript;
- (id)transcriptionURL;
- (void)writeTo:(id)arg1;

@end
