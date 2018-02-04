/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceAnchor : ARAnchor <ARTrackable> {
    NSDictionary * _blendShapeCoefficientsDictionary;
    ARFaceGeometry * _geometry;
    bool  _isTracked;
    ARFaceTrackingData * _trackingData;
}

@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ARFaceGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTracked;
@property (readonly) Class superclass;
@property (nonatomic, retain) ARFaceTrackingData *trackingData;

+ (id)blendShapeMapping;
+ (void)initialize;

- (void).cxx_destruct;
- (id)blendShapes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)geometry;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)imageVertices;
- (id)initWithIdentifier:(id)arg1 trackingData:(id)arg2;
- (bool)isTracked;
- (void)setIsTracked:(bool)arg1;
- (void)setTrackingData:(id)arg1;
- (id)trackingData;

@end
