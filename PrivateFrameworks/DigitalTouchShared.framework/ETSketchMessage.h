/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETSketchMessage : ETMessage {
    NSMutableArray * _colorsInMessage;
    bool  _didDrawPoints;
    bool  _didEndWisping;
    bool  _hasMultipleColors;
    bool  _hideComet;
    NSMutableArray * _strokes;
}

@property (nonatomic, readonly) NSArray *colorsInMessage;
@property (nonatomic) bool didDrawPoints;
@property (nonatomic) bool didEndWisping;
@property (nonatomic) bool hasMultipleColors;
@property (nonatomic) bool hideComet;
@property (nonatomic, readonly) unsigned long long numberOfColors;
@property (nonatomic, readonly) NSArray *strokes;

+ (unsigned short)messageType;

- (void).cxx_destruct;
- (bool)_decodeWithDoodle:(id)arg1;
- (void)addSketchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addSketchPoint:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2;
- (void)addStrokeWithColor:(id)arg1;
- (id)archiveData;
- (id)colorsInMessage;
- (void)convertToSimulatedPlaybackSpeed;
- (bool)didDrawPoints;
- (void)didEndWisp;
- (bool)didEndWisping;
- (void)didReachRendererLimit;
- (bool)hasMultipleColors;
- (bool)hideComet;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (unsigned long long)numberOfColors;
- (void)setDidDrawPoints:(bool)arg1;
- (void)setDidEndWisping:(bool)arg1;
- (void)setHasMultipleColors:(bool)arg1;
- (void)setHideComet:(bool)arg1;
- (void)setParentMessage:(id)arg1;
- (id)strokes;
- (void)willBeginWisp;

@end
