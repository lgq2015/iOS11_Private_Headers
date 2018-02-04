/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem {
    struct IMAssociatedMessageGeometryDescriptor { 
        unsigned long long layoutIntent; 
        unsigned long long associatedLayoutIntent; 
        float parentPreviewWidth; 
        float xScalar; 
        float yScalar; 
        float scale; 
        float rotation; 
    }  _geometryDescriptor;
    bool  _parentMessageIsFromMe;
    IMHandle * _sender;
}

@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) bool failed;
@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; } geometryDescriptor;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) NSDictionary *messageSummaryInfo;
@property (nonatomic, readonly) bool parentMessageIsFromMe;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) NSDate *time;

- (void).cxx_destruct;
- (id)_imAssociatedMessageItem;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (void)_setParentMessageIsFromMe:(bool)arg1;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; })geometryDescriptor;
- (bool)isFromMe;
- (id)message;
- (id)messageSummaryInfo;
- (bool)parentMessageIsFromMe;
- (id)sender;
- (id)time;

@end
