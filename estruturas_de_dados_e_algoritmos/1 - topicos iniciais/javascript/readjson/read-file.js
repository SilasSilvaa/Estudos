import { jsonData } from './file.js';

const parseTimestamp = (timestamp) => {
  return new Date(timestamp);
};

for (const course of jsonData) {
  console.log(`Curso: ${course.id} - ${course.title}`);

  for (const lesson of course.lessons) {
    console.log(`   Aula: ${lesson.id}: Title: ${lesson.title} `);
    console.log(`       Media: ${lesson.media}`);
    console.log(`       Timestamp: ${parseTimestamp(lesson.timestamp)}`);
    console.log();
  }
}
