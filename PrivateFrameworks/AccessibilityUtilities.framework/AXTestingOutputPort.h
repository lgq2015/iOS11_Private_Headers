/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXTestingOutputPort : AVAudioSessionPortDescription {
    NSString * UID;
    NSArray * _ttsChannels;
    NSString * portName;
    NSString * portType;
}

@property (retain) NSString *UID;
@property (retain) NSString *portName;
@property (retain) NSString *portType;
@property (retain) NSArray *ttsChannels;

- (void).cxx_destruct;
- (id)UID;
- (id)channels;
- (id)portName;
- (id)portType;
- (void)setPortName:(id)arg1;
- (void)setPortType:(id)arg1;
- (void)setTtsChannels:(id)arg1;
- (void)setUID:(id)arg1;
- (id)ttsChannels;

@end
