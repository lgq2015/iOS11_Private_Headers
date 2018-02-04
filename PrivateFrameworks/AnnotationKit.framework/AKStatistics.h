/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKStatistics : NSObject {
    NSCountedSet * _annotationsCounts;
    NSString * _clientPrefix;
    NSString * _documentType;
}

@property (nonatomic, retain) NSCountedSet *annotationsCounts;
@property (nonatomic, retain) NSString *clientPrefix;
@property (nonatomic, retain) NSString *documentType;

+ (id)nameForAnnotation:(id)arg1;
+ (id)nameForClassName:(id)arg1;

- (void).cxx_destruct;
- (id)annotationsCounts;
- (id)clientPrefix;
- (id)documentType;
- (void)logAnnotationAdded:(id)arg1;
- (void)logDocumentSaved;
- (void)logInkAnnotationStrokeAdded:(id)arg1;
- (void)logShapeDetectionHUDPickedShape:(id)arg1;
- (void)logShapeDetectionHUDShown;
- (void)resetLogging;
- (void)setAnnotationsCounts:(id)arg1;
- (void)setClientPrefix:(id)arg1;
- (void)setDocumentType:(id)arg1;

@end
