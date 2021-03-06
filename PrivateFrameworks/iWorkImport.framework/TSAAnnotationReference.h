/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAAnnotationReference : NSObject {
    <TSKAnnotation> * _annotation;
    unsigned long long  _pageIndex;
}

@property (nonatomic, retain) <TSKAnnotation> *annotation;
@property (nonatomic) unsigned long long pageIndex;

- (void).cxx_destruct;
- (id)annotation;
- (bool)isValidAndInDocument;
- (unsigned long long)pageIndex;
- (bool)referencesAnnotation:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setPageIndex:(unsigned long long)arg1;

@end
