/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapAnnotationManager : MKAnnotationManager {
    bool  _addedUserLocationAnnotation;
    MKAnnotationView * _userLocationView;
}

- (void).cxx_destruct;
- (id)_defaultUserLocationAnnotationView:(id)arg1;
- (bool)annotationIsInternal:(id)arg1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (bool)internalAnnotationAllowsCustomRepresentation:(id)arg1;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;

@end
