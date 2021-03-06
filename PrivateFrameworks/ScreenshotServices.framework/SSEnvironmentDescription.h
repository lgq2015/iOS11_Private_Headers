/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSEnvironmentDescription : NSObject <BSXPCCoding> {
    NSDate * _date;
    NSArray * _elements;
    NSString * _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _imagePixelSize;
    double  _imageScale;
    struct __IOSurface { } * _imageSurface;
    bool  _isFromMainScreen;
    unsigned long long  _presentationMode;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) NSString *briefDescription;
@property (nonatomic, readonly) BSSettings *bsSettings;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *elementUnitRects;
@property (nonatomic, readonly) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) struct CGSize { double x1; double x2; } imagePixelSize;
@property (nonatomic) double imageScale;
@property (nonatomic) struct __IOSurface { }*imageSurface;
@property (nonatomic) bool isFromMainScreen;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_imagePointSize;
- (id)briefDescription;
- (id)bsSettings;
- (id)date;
- (void)dealloc;
- (id)elementUnitRects;
- (id)elements;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)identifier;
- (struct CGSize { double x1; double x2; })imagePixelSize;
- (double)imageScale;
- (struct __IOSurface { }*)imageSurface;
- (id)initWithDisplayLayout:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isFromMainScreen;
- (unsigned long long)presentationMode;
- (id)sessionIdentifier;
- (void)setDate:(id)arg1;
- (void)setImagePixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageScale:(double)arg1;
- (void)setImageSurface:(struct __IOSurface { }*)arg1;
- (void)setIsFromMainScreen:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
