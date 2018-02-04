/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARMarkerAnchor : ARAnchor <ARTrackable> {
    bool  _isTracked;
    unsigned long long  _markerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTracked;
@property (nonatomic, readonly) unsigned long long markerID;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMarkerID:(unsigned long long)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 isTracked:(bool)arg3;
- (bool)isTracked;
- (unsigned long long)markerID;
- (void)setIsTracked:(bool)arg1;

@end
