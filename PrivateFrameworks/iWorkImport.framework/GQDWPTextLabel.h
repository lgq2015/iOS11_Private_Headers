/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPTextLabel : NSObject {
    int  mFirst;
    struct __CFString { } * mFormat;
    int  mLabelType;
}

- (void)dealloc;
- (int)first;
- (struct __CFString { }*)format;
- (int)labelType;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;

@end
