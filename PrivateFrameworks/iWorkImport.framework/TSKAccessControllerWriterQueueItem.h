/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAccessControllerWriterQueueItem : NSObject {
    struct NSThread { Class x1; id x2; /* Warning: Unrecognized filer type: '4' using 'void*' */ void*x3; void*x4; unsigned char x5; void*x6; } * _threadIdentifier;
}

@property (nonatomic, readonly) bool didTakePriority;
@property (nonatomic, readonly) NSThread *threadIdentifier;

+ (id)priorityMainThreadWriterQueueItem;
+ (id)writerQueueItemWithThreadIdentifier:(struct NSThread { Class x1; id x2; /* Warning: Unrecognized filer type: '4' using 'void*' */ void*x3; void*x4; unsigned char x5; void*x6; }*)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)didTakePriority;
- (id)initWithThreadIdentifier:(struct NSThread { Class x1; id x2; /* Warning: Unrecognized filer type: '4' using 'void*' */ void*x3; void*x4; unsigned char x5; void*x6; }*)arg1;
- (struct NSThread { Class x1; id x2; /* Warning: Unrecognized filer type: '4' using 'void*' */ void*x3; void*x4; unsigned char x5; void*x6; }*)threadIdentifier;

@end
