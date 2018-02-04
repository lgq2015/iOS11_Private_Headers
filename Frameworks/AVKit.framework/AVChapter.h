/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVChapter : NSObject <NSCopying> {
    double  _duration;
    UIImage * _image;
    id /* block */  _imageBlock;
    unsigned long long  _number;
    double  _startTime;
    NSString * _title;
}

@property (readonly) double duration;
@property (readonly) UIImage *image;
@property (readonly) unsigned long long number;
@property (readonly) double startTime;
@property (readonly, copy) NSString *title;

+ (id)chapterAtTime:(double)arg1 inChapters:(id)arg2;
+ (void)initialize;
+ (id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (unsigned long long)hash;
- (id)image;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(id /* block */)arg5;
- (bool)isEqual:(id)arg1;
- (unsigned long long)number;
- (double)startTime;
- (id)title;

@end
