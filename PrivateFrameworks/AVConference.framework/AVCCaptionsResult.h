/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCCaptionsResult : NSObject {
    NSMutableArray * _tokens;
    unsigned int  _updateNumber;
    bool  _utteranceComplete;
    unsigned int  _utteranceNumber;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) unsigned int updateNumber;
@property (nonatomic, readonly) bool utteranceComplete;
@property (nonatomic, readonly) unsigned int utteranceNumber;

- (bool)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(bool)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(long long)arg1 utteranceComplete:(bool)arg2 utteranceNumber:(unsigned int)arg3 updateNumber:(unsigned int)arg4;
- (id)text;
- (id)tokens;
- (unsigned int)updateNumber;
- (bool)utteranceComplete;
- (unsigned int)utteranceNumber;

@end
