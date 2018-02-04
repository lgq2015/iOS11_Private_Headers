/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser {
    unsigned long long  _curObjectLength;
    bool  _isParsing;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _mescalSignature;
    Class  _messageClass;
    NSMutableData * _tailParserData;
}

@property (nonatomic) unsigned long long curObjectLength;
@property (nonatomic) bool isParsing;
@property (nonatomic) struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; } mescalSignature;
@property (nonatomic) Class messageClass;
@property (nonatomic, retain) NSMutableData *tailParserData;

- (void).cxx_destruct;
- (bool)_parseObjectFromData:(id)arg1 rawData:(id)arg2;
- (bool)_parseObjects:(bool)arg1;
- (unsigned long long)curObjectLength;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id)initWithQoS:(long long)arg1;
- (bool)isParsing;
- (struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })mescalSignature;
- (Class)messageClass;
- (void)processData:(id)arg1;
- (void)setCurObjectLength:(unsigned long long)arg1;
- (void)setIsParsing:(bool)arg1;
- (void)setMescalSignature:(struct CC_SHA256state_st { unsigned int x1[2]; unsigned int x2[8]; unsigned int x3[16]; })arg1;
- (void)setMessageClass:(Class)arg1;
- (void)setTailParserData:(id)arg1;
- (id)tailParserData;

@end
