/* made by EzioChiu.
 */

@protocol NUJSImageTransformExport <JSExport>

@required

- (NSString *)description;
- (NUJSImageTransform *)transformByRotate:(double)arg1;
- (NUJSImageTransform *)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (NUJSImageTransform *)transformByTranslateX:(double)arg1 translateY:(double)arg2;

@optional

- (NUJSImageTransform *)transformByRotate:(double)arg1 __JS_EXPORT_AS__rotatedByDegrees:(id)arg2;
- (NUJSImageTransform *)transformByScaleX:(double)arg1 scaleY:(double)arg2 __JS_EXPORT_AS__scaledBy:(id)arg3;
- (NUJSImageTransform *)transformByTranslateX:(double)arg1 translateY:(double)arg2 __JS_EXPORT_AS__translatedBy:(id)arg3;

@end
