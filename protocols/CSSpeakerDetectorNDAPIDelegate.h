/* made by EzioChiu.
 */

@protocol CSSpeakerDetectorNDAPIDelegate <NSObject>

@required

- (void)speakerDetector:(CSSpeakerDetectorNDAPI *)arg1 didDetectSpeaker:(NSDictionary *)arg2;

@optional

- (void)speakerDetector:(CSSpeakerDetectorNDAPI *)arg1 didDetectSpeakerReject:(NSDictionary *)arg2;

@end
