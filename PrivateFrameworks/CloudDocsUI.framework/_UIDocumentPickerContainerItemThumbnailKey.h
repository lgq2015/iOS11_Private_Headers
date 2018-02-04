/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject {
    NSObject * _primaryKey;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) NSObject *primaryKey;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithPrimaryKey:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)primaryKey;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
