/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTransitBaseRouteLeg : GEOComposedRouteLeg {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _transitStepRange;
}

- (id)_accessPointsForTransitStep:(id)arg1;
- (id)endingTransitStop;
- (id)enterTransitAccessPoints;
- (id)exitTransitAccessPoints;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 transitStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)startingTransitStop;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })transitStepRange;

@end
