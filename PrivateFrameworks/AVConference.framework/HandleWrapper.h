/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface HandleWrapper : NSObject {
    struct tagHANDLE { int x1; } * handle;
}

@property struct tagHANDLE { int x1; }*handle;

- (struct tagHANDLE { int x1; }*)handle;
- (void)setHandle:(struct tagHANDLE { int x1; }*)arg1;

@end
