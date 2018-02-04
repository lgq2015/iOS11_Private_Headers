/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding> {
    AXMVisionFeatureAssetMetadata * _assetMetadata;
    NSString * _barcodeType;
    double  _blur;
    double  _brightness;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    AXMVisionFeatureColorInfo * _colorInfo;
    double  _confidence;
    double  _creationDate;
    AXMLanguage * _detectionLanguage;
    NSDictionary * _faceExpressionsAndConfidence;
    unsigned long long  _faceId;
    AXMVisionFeatureFaceLandmarks * _faceLandmarks;
    AXMVisionFeatureFaceLandmarks * _faceLandmarks3d;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _facePose;
    unsigned long long  _featureType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    float  _horizonAngle;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _horizonTransform;
    NSNumber * _isValueSpeakable;
    long long  _likelyExpression;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedFrame;
    long long  _ocrFeatureType;
    NSArray * _subfeatures;
    AXMTaggedText * _taggedText;
    NSString * _value;
}

@property (nonatomic, readonly) AXMVisionFeatureAssetMetadata *assetMetadata;
@property (nonatomic, readonly) NSString *barcodeType;
@property (nonatomic, readonly) double blur;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) AXMVisionFeatureColorInfo *colorInfo;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AXMLanguage *detectionLanguage;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *faceExpressionsAndConfidence;
@property (nonatomic, readonly) unsigned long long faceId;
@property (nonatomic, readonly) AXMVisionFeatureFaceLandmarks *faceLandmarks;
@property (nonatomic, readonly) AXMVisionFeatureFaceLandmarks *faceLandmarks3d;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } facePose;
@property (nonatomic, readonly) unsigned long long featureType;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float horizonAngle;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } horizonTransform;
@property (nonatomic, readonly) bool isAssetMetadata;
@property (nonatomic, readonly) bool isBarcode;
@property (nonatomic, readonly) bool isBlur;
@property (nonatomic, readonly) bool isBrightness;
@property (nonatomic, readonly) bool isClassification;
@property (nonatomic, readonly) bool isColor;
@property (nonatomic, readonly) bool isFace;
@property (nonatomic, readonly) bool isHorizon;
@property (nonatomic, readonly) bool isHuman;
@property (nonatomic, readonly) bool isMediaLegibility;
@property (nonatomic, readonly) bool isModelClassification;
@property (nonatomic, readonly) bool isOCR;
@property (nonatomic, readonly) bool isRectangle;
@property (nonatomic, readonly) bool isTextCharacter;
@property (nonatomic, readonly) bool isTextDiacritic;
@property (nonatomic, readonly) bool isTextDocument;
@property (nonatomic, readonly) bool isTextLine;
@property (nonatomic, readonly) bool isTextRegion;
@property (nonatomic, readonly) bool isTextSequence;
@property (nonatomic, readonly) bool isTrackable;
@property (nonatomic, readonly) bool isValueSpeakable;
@property (nonatomic, readonly) long long likelyExpression;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFrame;
@property (nonatomic, readonly) long long ocrFeatureType;
@property (nonatomic, readonly) NSArray *subfeatures;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AXMTaggedText *taggedText;
@property (nonatomic, readonly) NSString *value;

+ (void)_append:(id)arg1 toList:(id)arg2;
+ (id)debugNameForFeatureType:(unsigned long long)arg1;
+ (id)featureWithAssetMetadata:(id)arg1;
+ (id)featureWithColorInfo:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)featureWithFutharkFeature:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 context:(id)arg3;
+ (id)featureWithMediaLegibility:(id)arg1;
+ (id)featureWithMetadata:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)featureWithVisionRequest:(id)arg1 blurResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)featureWithVisionRequest:(id)arg1 brightnessResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)featureWithVisionRequest:(id)arg1 classificationResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)featureWithVisionRequest:(id)arg1 faceResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)featureWithVisionRequest:(id)arg1 humanResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)featureWithVisionRequest:(id)arg1 textResult:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3 context:(id)arg4;
+ (id)flattenedFeatureList:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)textDocumentWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 regions:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3 context:(id)arg4;
+ (id)textLineWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sequences:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3 context:(id)arg4;
+ (id)textRegionWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lines:(id)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3 context:(id)arg4;
+ (id)unitTestingFaceFeature;
+ (id)unitTestingFeature;
+ (id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6;
+ (id)unitTestingHorizonFeature;

- (void).cxx_destruct;
- (id)_init;
- (bool)_isTextFeatureValueSpeakable;
- (id)_nameForOCRFeatureType:(long long)arg1;
- (void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2;
- (id)_valueForTextFeature;
- (id)assetMetadata;
- (id)barcodeType;
- (double)blur;
- (double)brightness;
- (id)colorInfo;
- (double)confidence;
- (double)confidenceForExpression:(long long)arg1;
- (double)creationDate;
- (id)debugDescription;
- (id)description;
- (id)detectionLanguage;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)expressionForString:(id)arg1;
- (id)faceExpressionsAndConfidence;
- (unsigned long long)faceId;
- (id)faceLandmarks;
- (id)faceLandmarks3d;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })facePose;
- (unsigned long long)featureType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (unsigned long long)hash;
- (float)horizonAngle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })horizonTransform;
- (id)initWithCoder:(id)arg1;
- (bool)isAssetMetadata;
- (bool)isBarcode;
- (bool)isBlur;
- (bool)isBrightness;
- (bool)isClassification;
- (bool)isColor;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAXMVisionFeature:(id)arg1;
- (bool)isFace;
- (bool)isHorizon;
- (bool)isHuman;
- (bool)isMediaLegibility;
- (bool)isModelClassification;
- (bool)isOCR;
- (bool)isRectangle;
- (bool)isTextCharacter;
- (bool)isTextDiacritic;
- (bool)isTextDocument;
- (bool)isTextLine;
- (bool)isTextRegion;
- (bool)isTextSequence;
- (bool)isTrackable;
- (bool)isValueSpeakable;
- (long long)likelyExpression;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFrame;
- (long long)ocrFeatureType;
- (id)stringForExpression:(long long)arg1;
- (id)subfeatures;
- (id)taggedText;
- (id)value;

@end
