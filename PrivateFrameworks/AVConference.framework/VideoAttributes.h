/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VideoAttributes : NSObject <NSCoding, NSCopying> {
    int  camera;
    bool  cameraSwitching;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  contentsRect;
    int  orientation;
    struct CGSize { 
        double width; 
        double height; 
    }  ratio;
    bool  videoSourceScreen;
}

@property (nonatomic) int camera;
@property (nonatomic) bool cameraSwitching;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic) int orientation;
@property (nonatomic) struct CGSize { double x1; double x2; } ratio;
@property (nonatomic) bool videoSourceScreen;

+ (id)cameraUIDForVideoAttributeCamera:(int)arg1;
+ (int)videoAttributeCameraForCameraUID:(id)arg1;
+ (id)videoAttributesWithVideoAttributes:(id)arg1;

- (int)camera;
- (bool)cameraSwitching;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)copyEncodedDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize { double x1; double x2; })arg2 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (bool)isEqualToVideoAttributes:(id)arg1;
- (int)orientation;
- (struct CGSize { double x1; double x2; })ratio;
- (void)setCamera:(int)arg1;
- (void)setCameraSwitching:(bool)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (void)setRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoSourceScreen:(bool)arg1;
- (bool)videoSourceScreen;

@end
