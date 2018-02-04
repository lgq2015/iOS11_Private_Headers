/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCAudioRule : NSObject {
    bool  _isSecondary;
    int  _payload;
    unsigned int  _samplesPerBlock;
    bool  _sbr;
}

@property (nonatomic, readonly) bool isSecondary;
@property (nonatomic, readonly) int payload;
@property (nonatomic, readonly) unsigned int samplesPerBlock;
@property (nonatomic, readonly) bool sbr;

- (id)description;
- (id)initWithPayload:(int)arg1 isSecondary:(bool)arg2 sbr:(bool)arg3 samplesPerBlock:(unsigned int)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSecondary;
- (int)payload;
- (unsigned int)samplesPerBlock;
- (bool)sbr;

@end
